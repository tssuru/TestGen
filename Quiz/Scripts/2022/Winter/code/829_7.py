try:
    
    try:
        print(7, end="")
        print(int("d9"), end="")
        print(1, end="")
    except KeyboardInterrupt: 
        print(4, end="")
    except BaseException: 
        print(0, end="")
    else:
        print(2, end="")
    finally:
        print(9, end="")
    
except: print('error')
