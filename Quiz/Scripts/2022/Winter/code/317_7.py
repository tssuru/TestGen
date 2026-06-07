try:
    
    try:
        print(2, end="")
        print(int(0//2), end="")
        print(1, end="")
    except KeyboardInterrupt: 
        print(5, end="")
    except ZeroDivisionError: 
        print(6, end="")
    else:
        print(8, end="")
    finally:
        print(3, end="")
    
except: print('error')
