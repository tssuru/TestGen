try:
    a,b,c=7,6,4
    def h(b):
        a=4
        b*=5
        c=1
        return a+b+c
    
    a,b,c=5,2,8
    print(h(a),a,b,c)
    
except: print('error')
