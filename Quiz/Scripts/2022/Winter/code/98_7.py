try:
    
    try:
        print(7, end="")
        print(int(9//0.0), end="")
        print(0, end="")
    except KeyboardInterrupt: 
        print(2, end="")
    except ZeroDivisionError: 
        print(8, end="")
    else:
        print(5, end="")
    finally:
        print(3, end="")
    
except: print('error')
