try:
    
    try:
        print(7, end="")
        print(int("b9"), end="")
        print(8, end="")
    except KeyboardInterrupt: 
        print(4, end="")
    except BaseException: 
        print(1, end="")
    else:
        print(3, end="")
    finally:
        print(6, end="")
    
except: print('error')
