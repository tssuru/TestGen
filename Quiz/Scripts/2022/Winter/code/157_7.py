try:
    
    try:
        print(8, end="")
        print(5==8, end="")
        print(1, end="")
    except KeyboardInterrupt: 
        print(0, end="")
    except BaseException: 
        print(6, end="")
    else:
        print(3, end="")
    finally:
        print(2, end="")
    
except: print('error')
