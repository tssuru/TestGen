try:
    
    try:
        print(9, end="")
        print(8>=2, end="")
        print(7, end="")
    except Exception: 
        print(0, end="")
    except ValueError: 
        print(2, end="")
    else:
        print(9, end="")
    finally:
        print(7, end="")
    
except: print('error')
