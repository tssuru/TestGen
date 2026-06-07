try:
    
    try:
        print(9, end="")
        print(6!=7, end="")
        print(8, end="")
    except BaseException: 
        print(2, end="")
    except KeyboardInterrupt: 
        print(6, end="")
    else:
        print(4, end="")
    finally:
        print(1, end="")
    
except: print('error')
