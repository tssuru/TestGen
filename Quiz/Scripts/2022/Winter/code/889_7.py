try:
    
    try:
        print(9, end="")
        print(int(6%1), end="")
        print(4, end="")
    except BaseException: 
        print(8, end="")
    except KeyboardInterrupt: 
        print(5, end="")
    else:
        print(8, end="")
    finally:
        print(9, end="")
    
except: print('error')
