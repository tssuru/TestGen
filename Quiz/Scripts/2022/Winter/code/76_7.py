try:
    
    try:
        print(6, end="")
        print(int(9//0.0), end="")
        print(1, end="")
    except ZeroDivisionError: 
        print(7, end="")
    except KeyboardInterrupt: 
        print(4, end="")
    else:
        print(8, end="")
    finally:
        print(2, end="")
    
except: print('error')
