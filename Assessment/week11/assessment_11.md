<h1 align="left"> Problem Statement 1: A Trail of Footprints </h1>

You set off on a long and winding path in a forest, where each of your footsteps leaves behind a unique print in the mud. You decide to study this trail, but with a twist: you're only allowed to walk it once, and you can’t look back.

Partway through the journey, you pose yourself a curious challenge — “If I walk all the way to the end, can I figure out what the fifth-last footprint was?”

The path may be short or long — you never know in advance. But you must walk smartly: no recording the entire trail, and no retracing your steps. You can only remember just enough to track the answer as you go.

If the path turns out to be too short — that is, there aren’t even five steps — then the challenge must gracefully end with a clear answer: “Not enough steps to determine the fifth-last.”

Write a function that, given a series of footprints (modeled as a forward-only sequence), returns the fifth-last footprint. If there are fewer than five steps in total, return a special indicator (e.g., -1) to show the result is undefined.

Function Prototype:

int fifthLastFootprint(const std::vector& trail);

---

<h1 align="left">Problem Statement 2: The Balancing Bridge </h1> 

In a small mechanical town, a suspension bridge is designed with a special rule: whenever a vehicle enters the bridge, it must follow the weight order rules for balance. Heavier vehicles entering must wait until lighter vehicles ahead exit, ensuring no top-heavy pressure builds up on the bridge deck. If a heavier vehicle enters before lighter ones have exited, the bridge's balance system raises an alarm.

You're given a sequence of vehicle weights as they arrive to cross the bridge. Your task is to write a function that checks whether this sequence would maintain the bridge's balance according to its rules, and return "Balanced" or "Unbalanced" accordingly.

You are allowed to temporarily hold vehicles off the bridge if needed, but must process them in a way that does not violate the bridge rules.

Function Prototype:

std::string isBridgeBalanced(const std::vector<int>& vehicleWeights);


---

<h1 align="left"> Problem Statement 3: The Shifting Shadows  </h1>

In a mystical valley, shadows move across the ground as the sun shifts through the sky. Each hour, a shadow’s length is recorded — positive numbers for lengthening shadows and negative numbers for shrinking ones.

By sunset, you’re curious to find a very specific moment in the day — the first hour when the total movement of shadows over any consecutive 3-hour period was the highest.

But time is short, and you can only walk through the record once. No rewinding. No copying the whole log. Your challenge is to determine the starting index of the first 3-hour window that experienced the maximum cumulative shadow movement.

If the record is too short (i.e., fewer than 3 entries), you must return -1.

Function Prototype:

int maxShadowShiftStartIndex(const std::vector<int>& shadowMovements);

---


