try:
    a,b,c=1,2,4
    def h(b):
        a=4
        b=5
        c=1
        return a+b+c
    
    a,b,c=8,3,9
    print(h(a),a,b,c)
    
except: print('error')
