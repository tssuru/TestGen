try:
    
    try:
        print(6, end="")
        print(int(9/1), end="")
        print(2, end="")
    except ValueError: 
        print(8, end="")
    except KeyboardInterrupt: 
        print(5, end="")
    else:
        print(1, end="")
    finally:
        print(3, end="")
    
except: print('error')
