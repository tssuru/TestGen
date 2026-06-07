try:
    
    try:
        print(4, end="")
        print(int(6//3), end="")
        print(2, end="")
    except KeyboardInterrupt: 
        print(3, end="")
    except ZeroDivisionError: 
        print(0, end="")
    else:
        print(7, end="")
    finally:
        print(6, end="")
    
except: print('error')
