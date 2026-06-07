try:
    
    try:
        print(9, end="")
        print(1>1, end="")
        print(2, end="")
    except KeyboardInterrupt: 
        print(5, end="")
    except BaseException: 
        print(5, end="")
    else:
        print(3, end="")
    finally:
        print(0, end="")
    
except: print('error')
