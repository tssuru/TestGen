try:
    
    try:
        print(9, end="")
        print(int("7"), end="")
        print(0, end="")
    except BaseException: 
        print(5, end="")
    except KeyboardInterrupt: 
        print(3, end="")
    else:
        print(6, end="")
    finally:
        print(4, end="")
    
except: print('error')
