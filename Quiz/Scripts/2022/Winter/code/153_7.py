try:
    
    try:
        print(5, end="")
        print(int(9%1), end="")
        print(4, end="")
    except Exception: 
        print(3, end="")
    except KeyboardInterrupt: 
        print(6, end="")
    else:
        print(7, end="")
    finally:
        print(4, end="")
    
except: print('error')
