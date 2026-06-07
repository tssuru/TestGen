try:
    
    try:
        print(5, end="")
        print(int("6"), end="")
        print(0, end="")
    except KeyboardInterrupt: 
        print(7, end="")
    except BaseException: 
        print(2, end="")
    else:
        print(4, end="")
    finally:
        print(8, end="")
    
except: print('error')
