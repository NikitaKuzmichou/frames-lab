cmake_minimum_required (VERSION 3.17)

add_library (FramesLib STATIC
                Felidae.cpp
                pantherinae/Pantherinae.cpp
                pantherinae/cloudedLeopards/CloudedLeopard.cpp
                pantherinae/cloudedLeopards/CloudedLeopards.cpp
                pantherinae/panthers/Panthers.cpp
                pantherinae/panthers/tiger/Tiger.cpp
                pantherinae/panthers/lion/Lion.cpp
                felinae/Felinae.cpp
                felinae/felis/Felis.cpp
                felinae/felis/felis_silvestris/FelisSilvestris.cpp
                felinae/felis/felis_silvestris/FelisSilvestrisBieti.cpp
                felinae/felis/felis_silvestris/catus/FelisSilvestrisCatus.cpp
                felinae/felis/felis_silvestris/catus/FelisSilvestrisCatusDetrimental.cpp
                felinae/felis/felis_silvestris/catus/PerfectFelisSilvestrisCatus.cpp
                )