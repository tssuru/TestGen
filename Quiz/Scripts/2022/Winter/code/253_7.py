try:
    
    try:
        print(4, end="")
        print(int("6"), end="")
        print(3, end="")
    except BaseException: 
        print(1, end="")
    except KeyboardInterrupt: 
        print(9, end="")
    else:
        print(7, end="")
    finally:
        print(0, end="")
    
except: print('error')
