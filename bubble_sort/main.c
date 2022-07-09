#include <stdio.h>



int main(){
    int unsorted_integers[1000] = {326, 419, 631, 16, 295, 584, 680, 106, 921, 725, 54, 613, 389, 585, 925, 672, 898, 695, 969, 659, 563, 50, 30, 877, 578, 131, 796, 3, 850, 126, 971, 536, 824, 339, 463, 798, 846, 446, 191, 73, 747, 432, 496, 110, 269, 849, 821, 745, 910, 528, 913, 915, 454, 753, 68, 236, 490, 455, 603, 945, 385, 628, 855, 156, 504, 71, 759, 151, 675, 481, 984, 882, 953, 518, 211, 691, 371, 160, 398, 304, 640, 539, 75, 907, 6, 155, 140, 952, 933, 345, 491, 377, 462, 551, 234, 597, 853, 932, 616, 55, 626, 353, 492, 632, 501, 199, 179, 531, 36, 39, 822, 726, 408, 499, 397, 214, 799, 485, 733, 989, 249, 772, 946, 340, 242, 253, 296, 37, 83, 76, 402, 975, 358, 384, 557, 525, 229, 748, 829, 373, 433, 575, 100, 127, 380, 530, 220, 171, 902, 780, 252, 113, 441, 388, 467, 875, 545, 586, 908, 225, 623, 290, 607, 721, 979, 294, 832, 561, 722, 379, 313, 277, 299, 143, 62, 580, 978, 393, 862, 176, 794, 570, 157, 739, 724, 783, 469, 260, 293, 629, 633, 639, 404, 87, 950, 781, 440, 456, 893, 789, 954, 324, 569, 681, 556, 351, 587, 418, 965, 620, 510, 773, 823, 876, 521, 112, 887, 46, 836, 115, 828, 928, 714, 738, 145, 5, 122, 998, 333, 634, 209, 732, 884, 29, 831, 355, 507, 644, 674, 232, 590, 274, 814, 352, 267, 647, 142, 476, 689, 812, 688, 791, 96, 550, 487, 449, 516, 243, 755, 334, 20, 939, 826, 741, 776, 348, 596, 24, 86, 519, 77, 872, 788, 958, 470, 820, 544, 298, 219, 601, 422, 202, 705, 740, 513, 64, 916, 582, 612, 576, 12, 976, 15, 166, 778, 758, 947, 381, 707, 216, 288, 28, 696, 924, 679, 362, 992, 477, 636, 943, 320, 558, 154, 103, 347, 940, 383, 486, 517, 669, 540, 365, 905, 514, 606, 559, 80, 458, 475, 972, 683, 701, 495, 809, 604, 903, 286, 182, 163, 65, 868, 177, 567, 579, 233, 673, 400, 991, 97, 70, 457, 542, 980, 212, 543, 874, 275, 885, 129, 931, 124, 899, 297, 459, 803, 498, 818, 867, 730, 937, 894, 848, 878, 331, 720, 581, 442, 78, 310, 888, 47, 360, 250, 302, 322, 42, 522, 541, 406, 756, 970, 883, 834, 574, 370, 415, 879, 654, 60, 870, 120, 854, 661, 132, 657, 125, 630, 337, 169, 283, 621, 605, 342, 935, 839, 948, 416, 503, 238, 565, 973, 206, 494, 378, 198, 562, 312, 218, 742, 736, 664, 864, 38, 833, 7, 289, 703, 813, 524, 91, 649, 282, 382, 731, 802, 891, 330, 838, 554, 595, 158, 81, 708, 677, 909, 92, 938, 285, 646, 41, 479, 815, 749, 593, 356, 150, 245, 566, 988, 880, 21, 956, 667, 665, 311, 197, 374, 401, 990, 248, 564, 194, 117, 410, 533, 929, 959, 266, 451, 711, 865, 148, 690, 966, 642, 890, 843, 153, 468, 466, 101, 90, 482, 184, 344, 995, 241, 323, 960, 589, 305, 934, 723, 560, 873, 436, 930, 201, 247, 509, 413, 795, 350, 403, 346, 349, 118, 119, 53, 856, 399, 752, 272, 27, 985, 133, 901, 178, 228, 480, 314, 757, 445, 827, 265, 923, 983, 684, 981, 325, 532, 10, 553, 367, 438, 180, 213, 49, 256, 706, 484, 922, 396, 161, 911, 13, 964, 262, 141, 713, 662, 770, 858, 792, 25, 719, 994, 287, 292, 671, 851, 678, 962, 685, 527, 63, 205, 800, 224, 321, 610, 534, 977, 338, 26, 760, 765, 508, 735, 434, 656, 737, 645, 259, 614, 461, 40, 19, 189, 993, 89, 808, 847, 448, 82, 426, 164, 357, 787, 121, 810, 535, 307, 617, 165, 69, 95, 437, 136, 729, 474, 886, 793, 4, 187, 529, 750, 483, 717, 319, 641, 912, 552, 57, 598, 93, 22, 192, 734, 746, 804, 85, 94, 237, 18, 226, 881, 421, 704, 375, 255, 423, 663, 715, 48, 44, 751, 583, 830, 627, 471, 51, 390, 230, 615, 762, 102, 505, 168, 364, 577, 602, 825, 841, 227, 588, 376, 968, 904, 805, 568, 816, 488, 394, 728, 235, 207, 215, 697, 222, 861, 43, 526, 147, 768, 363, 489, 650, 361, 523, 777, 34, 766, 317, 217, 682, 652, 52, 811, 23, 609, 600, 807, 917, 785, 123, 107, 447, 727, 944, 857, 273, 687, 699, 316, 889, 619, 918, 109, 594, 892, 666, 411, 35, 368, 502, 658, 67, 982, 203, 817, 520, 906, 863, 987, 573, 58, 837, 105, 866, 45, 963, 417, 478, 11, 653, 754, 369, 779, 546, 648, 104, 185, 172, 130, 146, 407, 949, 506, 152, 336, 167, 204, 427, 258, 698, 635, 472, 17, 59, 515, 806, 354, 845, 181, 591, 99, 797, 897, 852, 280, 278, 871, 231, 774, 974, 240, 251, 914, 842, 599, 710, 301, 424, 387, 196, 1000, 414, 74, 676, 335, 927, 986, 840, 137, 860, 692, 771, 453, 941, 193, 592, 464, 465, 900, 420, 439, 392, 744, 332, 547, 920, 668, 425, 135, 618, 33, 452, 429, 538, 700, 775, 643, 8, 395, 291, 767, 391, 571, 637, 430, 257, 221, 686, 144, 271, 279, 284, 651, 114, 622, 359, 173, 572, 655, 84, 9, 435, 999, 309, 281, 702, 300, 996, 111, 500, 138, 175, 443, 409, 611, 32, 819, 869, 88, 170, 782, 967, 270, 997, 761, 835, 405, 764, 264, 66, 624, 98, 957, 128, 14, 366, 328, 548, 895, 936, 511, 801, 693, 1, 763, 512, 276, 460, 784, 450, 769, 79, 444, 159, 318, 896, 951, 308, 261, 223, 190, 188, 116, 431, 246, 670, 303, 329, 844, 473, 31, 315, 428, 210, 183, 263, 343, 174, 497, 961, 162, 859, 372, 694, 268, 718, 926, 254, 412, 2, 327, 244, 786, 625, 186, 919, 660, 149, 386, 555, 942, 790, 139, 712, 61, 134, 72, 537, 638, 716, 709, 341, 493, 306, 108, 549, 200, 955, 608, 56, 239, 208, 743, 195};
    int array_length = 1000;


    for(int outer = 0; outer < array_length; outer++){
        int there_was_a_swap = 1;

        for(int inner = 0; inner < array_length; inner++){
            printf("currently compared outer: %d, inner: %d\n", unsorted_integers[outer], unsorted_integers[inner]); //this tells us what values are been compared to get a better understanding of the algorithm.

            if(unsorted_integers[inner] < unsorted_integers[outer]){
                int held_temp = unsorted_integers[outer];
                unsorted_integers[outer] = unsorted_integers[inner];
                unsorted_integers[inner] = held_temp;
                there_was_a_swap = 0;
            }

        }

        if(there_was_a_swap == 1){
            break;
        }
    }

    printf("Array after sort:\n");
    for(int i = 0; i < array_length; i++){
        printf("%d\n", unsorted_integers[i]);
    }
    return 0;
}
