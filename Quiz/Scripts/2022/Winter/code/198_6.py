try:
    a,b,c=4,8,9
    def h(a):
        global c
        a+=2
        b=5
        c=2
        return a+b+c
    
    a,b,c=6,4,3
    print(h(a),a,b,c)
    
except: print('error')
