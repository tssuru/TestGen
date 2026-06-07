try:
    
    try:
        print(8, end="")
        print(int(5//0.0), end="")
        print(0, end="")
    except KeyboardInterrupt: 
        print(2, end="")
    except Exception: 
        print(6, end="")
    else:
        print(1, end="")
    finally:
        print(3, end="")
    
except: print('error')
