try:
    
    try:
        print(0, end="")
        print(int("9"), end="")
        print(5, end="")
    except KeyboardInterrupt: 
        print(1, end="")
    except BaseException: 
        print(4, end="")
    else:
        print(3, end="")
    finally:
        print(4, end="")
    
except: print('error')
