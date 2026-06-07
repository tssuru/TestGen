try:
    
    try:
        print(6, end="")
        print(int("9"), end="")
        print(2, end="")
    except KeyboardInterrupt: 
        print(8, end="")
    except BaseException: 
        print(5, end="")
    else:
        print(7, end="")
    finally:
        print(0, end="")
    
except: print('error')
