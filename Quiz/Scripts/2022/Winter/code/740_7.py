try:
    
    try:
        print(8, end="")
        print(int("a7"), end="")
        print(4, end="")
    except BaseException: 
        print(0, end="")
    except KeyboardInterrupt: 
        print(1, end="")
    else:
        print(3, end="")
    finally:
        print(6, end="")
    
except: print('error')
