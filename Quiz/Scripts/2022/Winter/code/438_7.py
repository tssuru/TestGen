try:
    
    try:
        print(5, end="")
        print(int(1%1), end="")
        print(2, end="")
    except KeyboardInterrupt: 
        print(6, end="")
    except ValueError: 
        print(3, end="")
    else:
        print(9, end="")
    finally:
        print(8, end="")
    
except: print('error')
