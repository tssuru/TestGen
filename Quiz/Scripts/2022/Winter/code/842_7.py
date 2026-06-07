try:
    
    try:
        print(3, end="")
        print(int(1//1), end="")
        print(0, end="")
    except ValueError: 
        print(7, end="")
    except Exception: 
        print(8, end="")
    else:
        print(2, end="")
    finally:
        print(6, end="")
    
except: print('error')
