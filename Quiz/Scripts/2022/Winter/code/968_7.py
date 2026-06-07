try:
    
    try:
        print(7, end="")
        print(4>5, end="")
        print(0, end="")
    except Exception: 
        print(5, end="")
    except KeyboardInterrupt: 
        print(9, end="")
    else:
        print(8, end="")
    finally:
        print(7, end="")
    
except: print('error')
