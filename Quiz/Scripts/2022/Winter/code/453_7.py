try:
    
    try:
        print(6, end="")
        print(int(2//2), end="")
        print(4, end="")
    except KeyboardInterrupt: 
        print(5, end="")
    except ZeroDivisionError: 
        print(7, end="")
    else:
        print(3, end="")
    finally:
        print(7, end="")
    
except: print('error')
