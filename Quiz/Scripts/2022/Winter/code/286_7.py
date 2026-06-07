try:
    
    try:
        print(4, end="")
        print(int(2//3), end="")
        print(3, end="")
    except ZeroDivisionError: 
        print(6, end="")
    except KeyboardInterrupt: 
        print(0, end="")
    else:
        print(0, end="")
    finally:
        print(1, end="")
    
except: print('error')
