try:
    
    try:
        print(1, end="")
        print(int(6%1), end="")
        print(9, end="")
    except ValueError: 
        print(5, end="")
    except KeyboardInterrupt: 
        print(2, end="")
    else:
        print(6, end="")
    finally:
        print(7, end="")
    
except: print('error')
