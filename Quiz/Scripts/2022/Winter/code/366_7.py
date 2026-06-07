try:
    
    try:
        print(4, end="")
        print(int(9//0), end="")
        print(8, end="")
    except BaseException: 
        print(5, end="")
    except KeyboardInterrupt: 
        print(6, end="")
    else:
        print(7, end="")
    finally:
        print(6, end="")
    
except: print('error')
