try:
    
    try:
        print(3, end="")
        print(2!=6, end="")
        print(0, end="")
    except ValueError: 
        print(4, end="")
    except ZeroDivisionError: 
        print(8, end="")
    else:
        print(6, end="")
    finally:
        print(5, end="")
    
except: print('error')
