try:
    
    try:
        print(5, end="")
        print(int("c2"), end="")
        print(5, end="")
    except KeyboardInterrupt: 
        print(1, end="")
    except BaseException: 
        print(9, end="")
    else:
        print(4, end="")
    finally:
        print(0, end="")
    
except: print('error')
