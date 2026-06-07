try:
    
    try:
        print(8, end="")
        print(int("0"), end="")
        print(7, end="")
    except BaseException: 
        print(9, end="")
    except KeyboardInterrupt: 
        print(8, end="")
    else:
        print(9, end="")
    finally:
        print(0, end="")
    
except: print('error')
