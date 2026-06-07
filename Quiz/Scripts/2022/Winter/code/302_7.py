try:
    
    try:
        print(6, end="")
        print(int(0/1), end="")
        print(2, end="")
    except ValueError: 
        print(0, end="")
    except ZeroDivisionError: 
        print(4, end="")
    else:
        print(5, end="")
    finally:
        print(1, end="")
    
except: print('error')
