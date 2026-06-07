try:
    
    try:
        print(2, end="")
        print(int("d9"), end="")
        print(1, end="")
    except KeyboardInterrupt: 
        print(9, end="")
    except BaseException: 
        print(2, end="")
    else:
        print(0, end="")
    finally:
        print(6, end="")
    
except: print('error')
