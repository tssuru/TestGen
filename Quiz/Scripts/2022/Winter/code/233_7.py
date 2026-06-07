try:
    
    try:
        print(7, end="")
        print(8<=0, end="")
        print(2, end="")
    except ZeroDivisionError: 
        print(4, end="")
    except ValueError: 
        print(5, end="")
    else:
        print(3, end="")
    finally:
        print(3, end="")
    
except: print('error')
