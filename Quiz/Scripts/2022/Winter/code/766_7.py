try:
    
    try:
        print(2, end="")
        print(6!=9, end="")
        print(1, end="")
    except KeyboardInterrupt: 
        print(0, end="")
    except Exception: 
        print(3, end="")
    else:
        print(8, end="")
    finally:
        print(9, end="")
    
except: print('error')
