try:
    
    try:
        print(0, end="")
        print(7==5, end="")
        print(9, end="")
    except KeyboardInterrupt: 
        print(3, end="")
    except BaseException: 
        print(6, end="")
    else:
        print(2, end="")
    finally:
        print(5, end="")
    
except: print('error')
