try:
    
    try:
        print(8, end="")
        print(int(0%1), end="")
        print(7, end="")
    except ValueError: 
        print(1, end="")
    except ZeroDivisionError: 
        print(5, end="")
    else:
        print(4, end="")
    finally:
        print(6, end="")
    
except: print('error')
