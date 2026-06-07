try:
    
    try:
        print(6, end="")
        print(int(5/0.0), end="")
        print(5, end="")
    except KeyboardInterrupt: 
        print(1, end="")
    except BaseException: 
        print(7, end="")
    else:
        print(8, end="")
    finally:
        print(9, end="")
    
except: print('error')
