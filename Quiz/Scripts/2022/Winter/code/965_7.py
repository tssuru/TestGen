try:
    
    try:
        print(1, end="")
        print(5==8, end="")
        print(2, end="")
    except KeyboardInterrupt: 
        print(7, end="")
    except BaseException: 
        print(6, end="")
    else:
        print(9, end="")
    finally:
        print(1, end="")
    
except: print('error')
