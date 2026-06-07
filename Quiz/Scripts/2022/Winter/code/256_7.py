try:
    
    try:
        print(3, end="")
        print(int(5/0.0), end="")
        print(9, end="")
    except Exception: 
        print(4, end="")
    except KeyboardInterrupt: 
        print(8, end="")
    else:
        print(2, end="")
    finally:
        print(9, end="")
    
except: print('error')
