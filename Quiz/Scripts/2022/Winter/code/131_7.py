try:
    
    try:
        print(2, end="")
        print(4!=2, end="")
        print(1, end="")
    except BaseException: 
        print(9, end="")
    except KeyboardInterrupt: 
        print(7, end="")
    else:
        print(0, end="")
    finally:
        print(8, end="")
    
except: print('error')
