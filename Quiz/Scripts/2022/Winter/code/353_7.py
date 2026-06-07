try:
    
    try:
        print(8, end="")
        print(int("c6"), end="")
        print(9, end="")
    except BaseException: 
        print(2, end="")
    except KeyboardInterrupt: 
        print(3, end="")
    else:
        print(5, end="")
    finally:
        print(8, end="")
    
except: print('error')
