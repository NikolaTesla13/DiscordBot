#include <sleepy_discord/sleepy_discord.h>

class MyClientClass : public SleepyDiscord::DiscordClient {
public:
	using SleepyDiscord::DiscordClient::DiscordClient;
	void onMessage(SleepyDiscord::Message message) override {
		if (message.startsWith("$hello"))
			sendMessage(message.channelID, "Hello, " + message.author.username + "!");
	}
};

int main() {
    MyClientClass client("NzkyMDA5ODA3NDAxODQ0NzQ2.X-XenA.BOgOEJWnhkU9RiDmP7XDb9DHGmQ", SleepyDiscord::USER_CONTROLED_THREADS);
	client.run();
}