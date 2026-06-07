try:
    
    try:
        print(5, end="")
        print(0>=5, end="")
        print(7, end="")
    except KeyboardInterrupt: 
        print(1, end="")
    except BaseException: 
        print(2, end="")
    else:
        print(9, end="")
    finally:
        print(0, end="")
    
except: print('error')
