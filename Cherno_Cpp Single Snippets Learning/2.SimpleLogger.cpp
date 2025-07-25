#include <iostream>

class Logger {

    public:
        
        enum LogLevel : char{
            
            LogLevelInfo = 1, 
            LogLevelWarning, 
            LogLevelError
        
        };

    private:
        
        LogLevel m_CurrentLevel = LogLevelInfo;

    public:
        void SetLogLevel(LogLevel level) {

            m_CurrentLevel = level;

        }

        void LogInfo(const char* Message) {

            if (m_CurrentLevel <= LogLevelInfo) {

                std::cout << "[Info]:" << Message << std::endl;

            }

        }

        void LogWarnning(const char* Message) {

            if (m_CurrentLevel <= LogLevelWarning) {

                std::cout << "[Warning]:" << Message << std::endl;

            }

        }

        void LogError(const char* Message) {

            if (m_CurrentLevel <= LogLevelError) {

                std::cout << "[Error]:" << Message << std::endl;

            }

        }

};

int main() {

    Logger logger;

    logger.SetLogLevel(logger.LogLevelInfo);
    logger.SetLogLevel(logger.LogLevelWarning);
    logger.SetLogLevel(logger.LogLevelError);

    logger.LogInfo("Info");
    logger.LogWarnning("Warning");
    logger.LogError("Error");
    
    return 0;

}