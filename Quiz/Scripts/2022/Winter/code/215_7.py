try:
    
    try:
        print(9, end="")
        print(6<1, end="")
        print(1, end="")
    except ValueError: 
        print(3, end="")
    except KeyboardInterrupt: 
        print(9, end="")
    else:
        print(8, end="")
    finally:
        print(2, end="")
    
except: print('error')
