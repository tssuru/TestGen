try:
    
    try:
        print(4, end="")
        print(int("a0"), end="")
        print(8, end="")
    except KeyboardInterrupt: 
        print(4, end="")
    except BaseException: 
        print(8, end="")
    else:
        print(9, end="")
    finally:
        print(0, end="")
    
except: print('error')
