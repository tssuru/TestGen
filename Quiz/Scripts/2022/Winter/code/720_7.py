try:
    
    try:
        print(4, end="")
        print(int(8%1), end="")
        print(5, end="")
    except ValueError: 
        print(6, end="")
    except TypeError: 
        print(9, end="")
    else:
        print(2, end="")
    finally:
        print(0, end="")
    
except: print('error')
