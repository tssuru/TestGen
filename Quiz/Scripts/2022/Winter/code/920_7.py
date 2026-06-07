try:
    
    try:
        print(3, end="")
        print(int(6//2), end="")
        print(7, end="")
    except KeyboardInterrupt: 
        print(0, end="")
    except ZeroDivisionError: 
        print(4, end="")
    else:
        print(5, end="")
    finally:
        print(8, end="")
    
except: print('error')
